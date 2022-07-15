/**
 * Python plugin for Orthanc
 * Copyright (C) 2020-2022 Osimis S.A., Belgium
 * Copyright (C) 2021-2022 Sebastien Jodogne, ICTEAM UCLouvain, Belgium
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License
 * as published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 **/


// Forward declaration of the autogenerated methods
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceRemoteAet(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceSize(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceJson(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceSimplifiedJson(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginHasInstanceMetadata(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceMetadata(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceOrigin(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceTransferSyntaxUid(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginHasInstancePixelData(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceFramesCount(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceRawFrame(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceDecodedFrame(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginSerializeDicomInstance(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceAdvancedJson(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
// End of forward declarations


// Forward declaration of the custom methods
extern PyObject *GetInstanceData(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args);
// End of forward declarations


static PyMethodDef sdk_OrthancPluginDicomInstance_Methods[] = {
  { "GetInstanceRemoteAet",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceRemoteAet, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceRemoteAet()" },
  { "GetInstanceSize",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceSize, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceSize()" },
  { "GetInstanceJson",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceJson, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceJson()" },
  { "GetInstanceSimplifiedJson",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceSimplifiedJson, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceSimplifiedJson()" },
  { "HasInstanceMetadata",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginHasInstanceMetadata, METH_VARARGS,
    "Generated from C function OrthancPluginHasInstanceMetadata()" },
  { "GetInstanceMetadata",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceMetadata, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceMetadata()" },
  { "GetInstanceOrigin",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceOrigin, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceOrigin()" },
  { "GetInstanceTransferSyntaxUid",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceTransferSyntaxUid, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceTransferSyntaxUid()" },
  { "HasInstancePixelData",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginHasInstancePixelData, METH_VARARGS,
    "Generated from C function OrthancPluginHasInstancePixelData()" },
  { "GetInstanceFramesCount",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceFramesCount, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceFramesCount()" },
  { "GetInstanceRawFrame",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceRawFrame, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceRawFrame()" },
  { "GetInstanceDecodedFrame",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceDecodedFrame, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceDecodedFrame()" },
  { "SerializeDicomInstance",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginSerializeDicomInstance, METH_VARARGS,
    "Generated from C function OrthancPluginSerializeDicomInstance()" },
  { "GetInstanceAdvancedJson",
    (PyCFunction) sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceAdvancedJson, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceAdvancedJson()" },
  { "GetInstanceData",
    (PyCFunction) GetInstanceData, METH_VARARGS,
    "Generated from C function OrthancPluginGetInstanceData()" },
  { NULL }  /* Sentinel */
};


static int sdk_OrthancPluginDicomInstance_Constructor(
  sdk_OrthancPluginDicomInstance_Object *self, PyObject *args, PyObject *kwds)
{
  PythonLock::LogCall("Creating Python object of class OrthancPluginDicomInstance");

  self->object_ = NULL;
  self->borrowed_ = false;
  
  long long object = 0;
  unsigned char borrowed = false;
  
  if (PyArg_ParseTuple(args, "Lb", &object, &borrowed))
  {
    self->object_ = reinterpret_cast<OrthancPluginDicomInstance*>(static_cast<intptr_t>(object));
    self->borrowed_ = borrowed;
    return 0;
  }
  else
  {
    PyErr_SetString(PyExc_ValueError, "Expected a pair (pointer, borrowed) in the constructor");
    return -1;
  }
}


/**
 * Static global structure => the fields that are beyond the last
 * initialized field are set to zero.
 * https://stackoverflow.com/a/11152199/881731
 **/
static PyTypeObject sdk_OrthancPluginDicomInstance_Type = {
  PyVarObject_HEAD_INIT(NULL, 0)
  "orthanc.DicomInstance",    /* tp_name */
  sizeof(sdk_OrthancPluginDicomInstance_Object), /* tp_basicsize */
};


static void sdk_OrthancPluginDicomInstance_Destructor(PyObject *self)
{
  PythonLock::LogCall("Destroying Python object of class OrthancPluginDicomInstance");

  sdk_OrthancPluginDicomInstance_Object& tmp = *((sdk_OrthancPluginDicomInstance_Object*) self);
  
  if (tmp.object_ != NULL &&
      !tmp.borrowed_)
  {
    OrthancPluginFreeDicomInstance(OrthancPlugins::GetGlobalContext(), tmp.object_);
    tmp.object_ = NULL;
  }
  
  Py_TYPE(self)->tp_free((PyObject *)self);
}


// Actual implementation of the methods
static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceRemoteAet(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginGetInstanceRemoteAet() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }


  const char* s = OrthancPluginGetInstanceRemoteAet(OrthancPlugins::GetGlobalContext(), self->object_);
  
  if (s == NULL)
  {
    Py_INCREF(Py_None);
    return Py_None;
  }
  else
  {
    return PyUnicode_FromString(s);
  }
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceSize(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginGetInstanceSize() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }


  long value = OrthancPluginGetInstanceSize(OrthancPlugins::GetGlobalContext(), self->object_);
  
  return PyLong_FromLong(value);
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceJson(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginGetInstanceJson() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }


  OrthancPlugins::OrthancString s;
  s.Assign(OrthancPluginGetInstanceJson(OrthancPlugins::GetGlobalContext(), self->object_));
  
  if (s.GetContent() == NULL)
  {
    PythonLock::RaiseException(OrthancPluginErrorCode_InternalError);
    return NULL;
  }
  else
  {
    return PyUnicode_FromString(s.GetContent());
  }
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceSimplifiedJson(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginGetInstanceSimplifiedJson() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }


  OrthancPlugins::OrthancString s;
  s.Assign(OrthancPluginGetInstanceSimplifiedJson(OrthancPlugins::GetGlobalContext(), self->object_));
  
  if (s.GetContent() == NULL)
  {
    PythonLock::RaiseException(OrthancPluginErrorCode_InternalError);
    return NULL;
  }
  else
  {
    return PyUnicode_FromString(s.GetContent());
  }
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginHasInstanceMetadata(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginHasInstanceMetadata() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }

  const char* arg0 = NULL;

  if (!PyArg_ParseTuple(args, "s", &arg0))
  {
    PyErr_SetString(PyExc_TypeError, "Bad types for the arguments (1 arguments expected)");
    return NULL;
  }
  long value = OrthancPluginHasInstanceMetadata(OrthancPlugins::GetGlobalContext(), self->object_, arg0);
  
  return PyLong_FromLong(value);
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceMetadata(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginGetInstanceMetadata() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }

  const char* arg0 = NULL;

  if (!PyArg_ParseTuple(args, "s", &arg0))
  {
    PyErr_SetString(PyExc_TypeError, "Bad types for the arguments (1 arguments expected)");
    return NULL;
  }
  const char* s = OrthancPluginGetInstanceMetadata(OrthancPlugins::GetGlobalContext(), self->object_, arg0);
  
  if (s == NULL)
  {
    Py_INCREF(Py_None);
    return Py_None;
  }
  else
  {
    return PyUnicode_FromString(s);
  }
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceOrigin(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginGetInstanceOrigin() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }


  OrthancPluginInstanceOrigin value = OrthancPluginGetInstanceOrigin(OrthancPlugins::GetGlobalContext(), self->object_);
  
  return PyLong_FromLong(value);
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceTransferSyntaxUid(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginGetInstanceTransferSyntaxUid() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }


  OrthancPlugins::OrthancString s;
  s.Assign(OrthancPluginGetInstanceTransferSyntaxUid(OrthancPlugins::GetGlobalContext(), self->object_));
  
  if (s.GetContent() == NULL)
  {
    PythonLock::RaiseException(OrthancPluginErrorCode_InternalError);
    return NULL;
  }
  else
  {
    return PyUnicode_FromString(s.GetContent());
  }
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginHasInstancePixelData(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginHasInstancePixelData() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }


  long value = OrthancPluginHasInstancePixelData(OrthancPlugins::GetGlobalContext(), self->object_);
  
  return PyLong_FromLong(value);
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceFramesCount(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginGetInstanceFramesCount() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }


  long value = OrthancPluginGetInstanceFramesCount(OrthancPlugins::GetGlobalContext(), self->object_);
  
  return PyLong_FromLong(value);
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceRawFrame(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginGetInstanceRawFrame() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }

  unsigned long arg0 = 0;

  if (!PyArg_ParseTuple(args, "k", &arg0))
  {
    PyErr_SetString(PyExc_TypeError, "Bad types for the arguments (1 arguments expected)");
    return NULL;
  }
  OrthancPlugins::MemoryBuffer buffer;
  OrthancPluginErrorCode code = OrthancPluginGetInstanceRawFrame(OrthancPlugins::GetGlobalContext(), *buffer, self->object_, arg0);
  
  if (code == OrthancPluginErrorCode_Success)
  {
    return PyBytes_FromStringAndSize(buffer.GetData(), buffer.GetSize());
  }
  else
  {
    PythonLock::RaiseException(code);
    return NULL;  
  }
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceDecodedFrame(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginGetInstanceDecodedFrame() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }

  unsigned long arg0 = 0;

  if (!PyArg_ParseTuple(args, "k", &arg0))
  {
    PyErr_SetString(PyExc_TypeError, "Bad types for the arguments (1 arguments expected)");
    return NULL;
  }
  // This is the case of a constructor
  OrthancPluginImage* obj = OrthancPluginGetInstanceDecodedFrame(OrthancPlugins::GetGlobalContext(), self->object_, arg0);
  
  if (obj == NULL)
  {
    PythonLock::RaiseException(OrthancPluginErrorCode_InternalError);
    return NULL;  
  }
  else
  {
    PyObject *argList = Py_BuildValue("Lb", obj, false /* not borrowed */);
    PyObject *python = PyObject_CallObject((PyObject *) &sdk_OrthancPluginImage_Type, argList);
    Py_DECREF(argList);
    return python;
  }
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginSerializeDicomInstance(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginSerializeDicomInstance() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }


  OrthancPlugins::MemoryBuffer buffer;
  OrthancPluginErrorCode code = OrthancPluginSerializeDicomInstance(OrthancPlugins::GetGlobalContext(), *buffer, self->object_);
  
  if (code == OrthancPluginErrorCode_Success)
  {
    return PyBytes_FromStringAndSize(buffer.GetData(), buffer.GetSize());
  }
  else
  {
    PythonLock::RaiseException(code);
    return NULL;  
  }
}

static PyObject *sdk_OrthancPluginDicomInstance_OrthancPluginGetInstanceAdvancedJson(
  sdk_OrthancPluginDicomInstance_Object* self, PyObject *args)
{
  PythonLock::LogCall("Calling method OrthancPluginGetInstanceAdvancedJson() on object of class OrthancPluginDicomInstance");

  if (self->object_ == NULL)
  {
    PyErr_SetString(PyExc_ValueError, "Invalid object");
    return NULL;
  }

  long int arg0 = 0;
  long int arg1 = 0;
  unsigned long arg2 = 0;

  if (!PyArg_ParseTuple(args, "llk", &arg0, &arg1, &arg2))
  {
    PyErr_SetString(PyExc_TypeError, "Bad types for the arguments (3 arguments expected)");
    return NULL;
  }
  OrthancPlugins::OrthancString s;
  s.Assign(OrthancPluginGetInstanceAdvancedJson(OrthancPlugins::GetGlobalContext(), self->object_, static_cast<OrthancPluginDicomToJsonFormat>(arg0), static_cast<OrthancPluginDicomToJsonFlags>(arg1), arg2));
  
  if (s.GetContent() == NULL)
  {
    PythonLock::RaiseException(OrthancPluginErrorCode_InternalError);
    return NULL;
  }
  else
  {
    return PyUnicode_FromString(s.GetContent());
  }
}



static void RegisterOrthancPluginDicomInstanceClass(PyObject* module)
{
  sdk_OrthancPluginDicomInstance_Type.tp_new = PyType_GenericNew;
  sdk_OrthancPluginDicomInstance_Type.tp_flags = Py_TPFLAGS_DEFAULT;
  sdk_OrthancPluginDicomInstance_Type.tp_doc = "Generated from Orthanc C class: OrthancPluginDicomInstance";
  sdk_OrthancPluginDicomInstance_Type.tp_methods = sdk_OrthancPluginDicomInstance_Methods;
  sdk_OrthancPluginDicomInstance_Type.tp_init = (initproc) sdk_OrthancPluginDicomInstance_Constructor;

  /**
   * "tp_dealloc is called when the reference count of the object goes
   * down to zero. This is where you destroy the object and its
   * members. It should then free the memory occupied by the object by
   * calling tp_free."
   * https://stackoverflow.com/a/24863227/881731
   **/
  sdk_OrthancPluginDicomInstance_Type.tp_dealloc = sdk_OrthancPluginDicomInstance_Destructor;
  
  if (PyType_Ready(&sdk_OrthancPluginDicomInstance_Type) < 0)
  {
    OrthancPlugins::LogError("Cannot register Python class: OrthancPluginDicomInstance");
    ORTHANC_PLUGINS_THROW_EXCEPTION(InternalError);
  }

  Py_INCREF(&sdk_OrthancPluginDicomInstance_Type);
  if (PyModule_AddObject(module, "DicomInstance", (PyObject *)&sdk_OrthancPluginDicomInstance_Type) < 0)
  {
    OrthancPlugins::LogError("Cannot register Python class: OrthancPluginDicomInstance");
    Py_DECREF(&sdk_OrthancPluginDicomInstance_Type);
    ORTHANC_PLUGINS_THROW_EXCEPTION(InternalError);
  }
}


PyTypeObject* GetOrthancPluginDicomInstanceType()
{
  return &sdk_OrthancPluginDicomInstance_Type;
}