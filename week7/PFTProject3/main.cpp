#include <Python.h>
#include <iostream>
#include <cmath>
#include <string>
#include "DisplayMenu.h"

using namespace std;

/*
Description:
	To call this function, simply pass the function name in Python that you wish to call.
Example:
	callProcedure("printsomething");
Output:
	Python will print on the screen: Hello from python!
Return:
	None
*/
void CallProcedure(string pName)
{
    char *procname = new char[pName.length() + 1];
    std::strcpy(procname, pName.c_str());
    Py_Initialize();

    PyRun_SimpleString("import sys");
    PyRun_SimpleString("import os");
    PyRun_SimpleString("sys.path.append(os.getcwd())");

    PyObject* my_module = PyImport_ImportModule("python_modules.PythonCode");
    PyErr_Print();
    PyObject* my_function = PyObject_GetAttrString(my_module, procname);
    PyObject* my_result = PyObject_CallObject(my_function, NULL);
    Py_Finalize();

    delete[] procname;
}

/*
Description:
	To call this function, pass the name of the Python functino you wish to call and the string parameter you want to send
Example:
	int x = callIntFunc("PrintMe","Test");
Output:
	Python will print on the screen:
		You sent me: Test
Return:
	100 is returned to the C++
*/
int callIntFunc(string proc, string param)
{
    char *procname = new char[proc.length() + 1];
    std::strcpy(procname, proc.c_str());

    char *paramval = new char[param.length() + 1];
    std::strcpy(paramval, param.c_str());


    PyObject *pName, *pModule, *pDict, *pFunc, *pValue = nullptr, *presult = nullptr;
    // Initialize the Python Interpreter
    Py_Initialize();
    // Build the name object
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("import os");
    PyRun_SimpleString("sys.path.append(os.getcwd())");



    pName = PyUnicode_FromString((char*)"python_modules.PythonCode");
    // Load the module object
    pModule = PyImport_Import(pName);
    // pDict is a borrowed reference
    pDict = PyModule_GetDict(pModule);
    // pFunc is also a borrowed reference
    pFunc = PyDict_GetItemString(pDict, procname);
    if (PyCallable_Check(pFunc))
    {
        pValue = Py_BuildValue("(z)", paramval);
        PyErr_Print();
        presult = PyObject_CallObject(pFunc, pValue);
        PyErr_Print();
    }
    else
    {
        PyErr_Print();
    }
    //printf("Result is %d\n", _PyLong_AsInt(presult));
    Py_DECREF(pValue);
    // Clean up
    Py_DECREF(pModule);
    Py_DECREF(pName);
    // Finish the Python Interpreter
    Py_Finalize();

    // clean
    delete[] procname;
    delete[] paramval;


    return _PyLong_AsInt(presult);
}

/*
Description:
	To call this function, pass the name of the Python functino you wish to call and the string parameter you want to send
Example:
	int x = callIntFunc("doublevalue",5);
Return:
	25 is returned to the C++
*/
int callIntFunc(string proc, int param)
{
    char *procname = new char[proc.length() + 1];
    std::strcpy(procname, proc.c_str());

    PyObject *pName, *pModule, *pDict, *pFunc, *pValue = nullptr, *presult = nullptr;
    // Initialize the Python Interpreter
    Py_Initialize();
    // Build the name object
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("import os");
    PyRun_SimpleString("sys.path.append(os.getcwd())");

    pName = PyUnicode_FromString((char*)"python_modules.PythonCode");
    // Load the module object
    pModule = PyImport_Import(pName);
    // pDict is a borrowed reference
    pDict = PyModule_GetDict(pModule);
    // pFunc is also a borrowed reference
    pFunc = PyDict_GetItemString(pDict, procname);
    if (PyCallable_Check(pFunc))
    {
        pValue = Py_BuildValue("(i)", param);
        PyErr_Print();
        presult = PyObject_CallObject(pFunc, pValue);
        PyErr_Print();
    }
    else
    {
        PyErr_Print();
    }
    //printf("Result is %d\n", _PyLong_AsInt(presult));
    Py_DECREF(pValue);
    // Clean up
    Py_DECREF(pModule);
    Py_DECREF(pName);
    // Finish the Python Interpreter
    Py_Finalize();

    // clean
    delete[] procname;

    return _PyLong_AsInt(presult);
}

int main()
{
//    callIntFunc("PrintMe", "Tuna!");
    bool start = true;
    int userChoice;
    string findItem;


    while(start) {
        displayMenu();
        cin >> userChoice;

        if(userChoice < 0 || userChoice > 4) {
            cout << "The number you've selected is not an option. Please try again." << endl;
            cout << endl;
        }

        switch (userChoice) {
            case 1:
                cout << "All items purchased & number of times each item was purchased" << endl;
                cout << endl;
                CallProcedure("ReadItemsPurchased");

                cout << endl;

                break;
            case 2:
                cout << "Total amount purchased of a specific item" << endl;
                cout << "Enter the name of a product: " << endl;
                cin >> findItem;
                cout << endl;
                cout << callIntFunc("find_item", findItem) << endl;
                cout << endl;
                break;
            case 3:
                cout << "Display text histogram" << endl;
                break;
            case 4:
                system("clear");
                start = false;
                cout << "Goodbye!" << endl;
                break;
        }

    }


    return 0;
}