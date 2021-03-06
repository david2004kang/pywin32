// This file declares the IDebugDocumentTextEvents Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIDebugDocumentTextEvents : public PyIUnknown {
   public:
    MAKE_PYCOM_CTOR_ERRORINFO(PyIDebugDocumentTextEvents, IID_IDebugDocumentTextEvents);
    static IDebugDocumentTextEvents *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *onDestroy(PyObject *self, PyObject *args);
    static PyObject *onInsertText(PyObject *self, PyObject *args);
    static PyObject *onRemoveText(PyObject *self, PyObject *args);
    static PyObject *onReplaceText(PyObject *self, PyObject *args);
    static PyObject *onUpdateTextAttributes(PyObject *self, PyObject *args);
    static PyObject *onUpdateDocumentAttributes(PyObject *self, PyObject *args);

   protected:
    PyIDebugDocumentTextEvents(IUnknown *pdisp);
    ~PyIDebugDocumentTextEvents();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGDebugDocumentTextEvents : public PyGatewayBase, public IDebugDocumentTextEvents {
   protected:
    PyGDebugDocumentTextEvents(PyObject *instance) : PyGatewayBase(instance) { ; }
    PYGATEWAY_MAKE_SUPPORT(PyGDebugDocumentTextEvents, IDebugDocumentTextEvents, IID_IDebugDocumentTextEvents)

    // IDebugDocumentTextEvents
    STDMETHOD(onDestroy)(void);

    STDMETHOD(onInsertText)(ULONG cCharacterPosition, ULONG cNumToInsert);

    STDMETHOD(onRemoveText)(ULONG cCharacterPosition, ULONG cNumToRemove);

    STDMETHOD(onReplaceText)(ULONG cCharacterPosition, ULONG cNumToReplace);

    STDMETHOD(onUpdateTextAttributes)(ULONG cCharacterPosition, ULONG cNumToUpdate);

    STDMETHOD(onUpdateDocumentAttributes)(TEXT_DOC_ATTR textdocattr);
};
