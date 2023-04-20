'''
@author: JGD
'''
import unittest
from cast.application.test import run
from cast.application import create_postgres_engine

class Test(unittest.TestCase):


    def testName(self):
        run(kb_name='jnisample_local', application_name='JNISample', engine=create_postgres_engine(host='localhost', port=2284))

if __name__ == "__main__":
    unittest.main()

