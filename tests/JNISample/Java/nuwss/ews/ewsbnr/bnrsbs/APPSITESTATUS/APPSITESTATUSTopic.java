package nuwss.ews.ewsbnr.bnrsbs.APPSITESTATUS;

import javax.jms.*;
import javax.naming.*;
import java.util.*;


/**
 * This class is used by the native EWSBNR to subscribe to and receive messages
 * related to the APPSITESTATUSTopic topic. Although the native code
 * could directly subscribe to the topic, it is not able to directly receive the
 * corresponding message as it comes in via a callback to Java side only and
 * not to a native callback method.
 * <p>
 * To handle this in a method which does not require polling, native higherAPPlicatione code
 * (in HIGHERAPPLICATION_JVM.cpp) creates an instance of
 * APPSITESTATUSTopic which subscribes to the APPSITESTATUSUPDATED topic
 * 
 */
public class APPSITESTATUSTopic implements MessageListener,
        ExceptionListener {


    /**
     * Constructor - receives and stores the InitialContext from the native
     * code.
     *
     */
    public APPSITESTATUSTopic() {
    }

    /**
     * Method called by the native EWSBNR code to create and start the
     * subscriber.
     *
     * @param void
     * @return void
     */
    public String start() {
        String res = SUCCESS;
    }

    /**
     * Static method to load the library containing the native message handler.
     */
    static { System.loadLibrary("APPSITESTATUS"); }

    /**
     * Native method which will post the formatted message to EWSBNR's process
     * queue.
     *

     */
    private native boolean onMessage(boolean APPSITESTATUS);
}
