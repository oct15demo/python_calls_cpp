<h3>python_calls_cpp</h3>

Demo of calling C/C++ from python.
There are two versions, with and without passing arguments.

Without arguments

    g++ callme.cpp
    python callmain.py

With arguments

    g++ callmewithargs.cpp
    python callmainwithargs.py abc def ghi

Contents of this repository:

    src/callmain.py
        callmainwithargs.py
        callme.cpp
        callmewithargs.cpp
   
<hr>
Note: To see arguments printed, you must call compiled callmewithargs.cpp using python callmainwithargs.py<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
If you attempt to run the a.out compiled from callmewithargs.cpp with the python script callmain.py, it will produce a segmentation fault and cause python to "quit unexpectedly". Use of a try catch in C/C++ or try except in python can not trap this error (I tried).
<hr>
The code uses the marcros __FUNCTION__, __FILE__, and __LINE__ to output the function name, file name, and line number for the use case of logging in the console of the Eclipse CDT IDE. Eclipse CDT, the C/C++ version of the IDE, apparently doesn't have the capability of log lines in the console linking to the source file as found in the Java environment and other C/C++ IDEs. However, calling the C/C++ program from python will cause the log output links to be active, using the same format as required by Java or python, filename:linenumber. To do this, you need the pydev plugin for Eclipse. 
<br><br>
I have left a new query in the Eclipse forum to ask if the feature is hidden, in the works, or difficult to implement. A query by someone else in Stackoverflow from 2016 elicited no answers. I'll suggest this workaround pending a response from Eclipse.
