'''
@author: JGD
'''
from cast.application import ApplicationLevelExtension
import logging

class WicketExtension(ApplicationLevelExtension):        
    def end_application(self, application):        
        logging.info("[JNI] running code at the end of an application for JNI")
        
        logging.info("[JNI] Creating links between java and c...")
        self.link_java_to_c(application)

        logging.info("[JNI] Creating links between c and java...")
        self.link_c_to_java(application)

        logging.info("[JNI] Links created")        

    def link_java_to_c(self, application):
        req = """insert into CI_LINKS (CALLER_ID, CALLED_ID, LINK_TYPE, ERROR_ID)
                select distinct oj.object_id caller_id, oc.object_id called_id, 'callLink', 0
				from cdt_objects oc, cdt_objects oj
				where oc.object_mangling LIKE '%return JNIEXPORT'
				and oc.object_type_str = 'C/C++ Function'
				and oj.object_type_str = 'Java Method'
				and lower(oj.object_type_ext) LIKE '%native%'
				and regexp_replace(replace(oc.object_name, '_', '.'), '^Java\.', '') = oj.object_fullname
        """
        try:
            application.update_cast_knowledge_base('JNI-001', req)
        except:
            logging.warning('JNI-001', 'Failed to create links between java and c (JNI)')
        
    def link_c_to_java(self, application):
        req = """insert into CI_LINKS (CALLER_ID, CALLED_ID, LINK_TYPE, ERROR_ID)
                select distinct oc.object_id caller_id, oj.object_id called_id, 'callLink', 0
				from cdt_objects oc, cdt_objects oj
				where oc.object_mangling LIKE '%return JNIEXPORT'
				and oc.object_type_str = 'C/C++ Function'
				and oj.object_type_str = 'Java Method'
				and NOT lower(oj.object_type_ext) LIKE '%native%'
				and regexp_replace(replace(oc.object_name, '_', '.'), '^Java\.', '') = oj.object_fullname
            """
        try:
            application.update_cast_knowledge_base('JNI-002', req)
        except:
            logging.warning('JNI-002', 'Failed to create links between c and java (JNI)')
        
