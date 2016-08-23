#pragma once
class CPyArgBuilder
{
	std::vector<PyObject*> arguments;
	PyObject* argList = nullptr;
public:
	CPyArgBuilder& operator<<(unsigned int arg)
	{
		arguments.push_back(PyLong_FromLong((long)arg));
		return *this;
	}
	CPyArgBuilder& operator<<(long arg)
	{
		arguments.push_back(PyLong_FromLong(arg));
		return *this;
	}
	CPyArgBuilder& operator<<(int arg)
	{
		arguments.push_back(PyInt_FromLong(arg));
		return *this;
	}
	CPyArgBuilder& operator<<(double arg)
	{
		arguments.push_back(PyFloat_FromDouble(arg));
		return *this;
	}
	CPyArgBuilder& operator<<(const char* arg)
	{
		arguments.push_back(PyString_FromString(arg));
		return *this;
	}
	CPyArgBuilder& operator<<(std::string arg)
	{
		arguments.push_back(PyString_FromString(arg.c_str()));
		return *this;
	}
	PyObject* Finish()
	{
		argList = PyTuple_New(arguments.size());
		int i = 0;
		for each (PyObject* object in arguments)
		{
			PyTuple_SetItem(argList, i, object); //stolen
			i++;
		}
		return argList;
	}
	PyObject* operator()()
	{
		return Finish();
	}

	CPyArgBuilder();
	~CPyArgBuilder();
};

