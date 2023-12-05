#include <stdlib.h>
#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info -  function that prints some basic
 *info about Python lists
 * @p: python list
 */
void print_python_list_info(PyObject *p)
{
	int size,alloc,i;
	pyo = *obj;
	size = Py_SIZE(p);
	alloc = ((PyListObject *)p)->allocated;
	printf("[*] Size of the Python List =%d\n",sise);
	printf("[*] Allocated = %d\n",alloc);
	for (i = 0; i < size; i++)
	{
	printf("Element %d :",i);
	obj = PyList_GetItem(p, i);
	printf("%s\n",Py_TYPE(obj)->tp_name);
	}
}
