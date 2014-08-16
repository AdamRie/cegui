// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "TypedPropertyColourUBox.pypp.hpp"

namespace bp = boost::python;

struct TypedProperty_less__CEGUI_scope_UBox__greater__wrapper : CEGUI::TypedProperty< CEGUI::UBox >, bp::wrapper< CEGUI::TypedProperty< CEGUI::UBox > > {

    virtual ::CEGUI::String get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_get = this->get_override( "get" ) )
            return func_get( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::TypedProperty< CEGUI::UBox >::get( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::TypedProperty< CEGUI::UBox >::get( boost::python::ptr(receiver) );
    }

    virtual ::CEGUI::UBox getNative( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getNative = this->get_override( "getNative" ) )
            return func_getNative( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::TypedProperty< CEGUI::UBox >::getNative( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::UBox default_getNative( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::TypedProperty< CEGUI::UBox >::getNative( boost::python::ptr(receiver) );
    }

    virtual ::CEGUI::UBox getNative_impl( ::CEGUI::PropertyReceiver const * receiver ) const {
        bp::override func_getNative_impl = this->get_override( "getNative_impl" );
        return func_getNative_impl( boost::python::ptr(receiver) );
    }

    virtual void set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        if( bp::override func_set = this->get_override( "set" ) )
            func_set( boost::python::ptr(receiver), boost::ref(value) );
        else{
            this->CEGUI::TypedProperty< CEGUI::UBox >::set( boost::python::ptr(receiver), boost::ref(value) );
        }
    }
    
    void default_set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        CEGUI::TypedProperty< CEGUI::UBox >::set( boost::python::ptr(receiver), boost::ref(value) );
    }

    virtual void setNative( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::UBox const & value ) {
        if( bp::override func_setNative = this->get_override( "setNative" ) )
            func_setNative( boost::python::ptr(receiver), boost::ref(value) );
        else{
            this->CEGUI::TypedProperty< CEGUI::UBox >::setNative( boost::python::ptr(receiver), boost::ref(value) );
        }
    }
    
    void default_setNative( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::UBox const & value ) {
        CEGUI::TypedProperty< CEGUI::UBox >::setNative( boost::python::ptr(receiver), boost::ref(value) );
    }

    virtual void setNative_impl( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::UBox const & value ){
        bp::override func_setNative_impl = this->get_override( "setNative_impl" );
        func_setNative_impl( boost::python::ptr(receiver), boost::ref(value) );
    }

    virtual ::CEGUI::Property * clone(  ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone(  );
    }

    virtual bool doesWriteXML(  ) const  {
        if( bp::override func_doesWriteXML = this->get_override( "doesWriteXML" ) )
            return func_doesWriteXML(  );
        else{
            return this->CEGUI::Property::doesWriteXML(  );
        }
    }
    
    bool default_doesWriteXML(  ) const  {
        return CEGUI::Property::doesWriteXML( );
    }

    virtual ::CEGUI::String getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getDefault = this->get_override( "getDefault" ) )
            return func_getDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::getDefault( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::getDefault( boost::python::ptr(receiver) );
    }

    virtual void initialisePropertyReceiver( ::CEGUI::PropertyReceiver * arg0 ) const  {
        if( bp::override func_initialisePropertyReceiver = this->get_override( "initialisePropertyReceiver" ) )
            func_initialisePropertyReceiver( boost::python::ptr(arg0) );
        else{
            this->CEGUI::Property::initialisePropertyReceiver( boost::python::ptr(arg0) );
        }
    }
    
    void default_initialisePropertyReceiver( ::CEGUI::PropertyReceiver * arg0 ) const  {
        CEGUI::Property::initialisePropertyReceiver( boost::python::ptr(arg0) );
    }

    virtual bool isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_isDefault = this->get_override( "isDefault" ) )
            return func_isDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::isDefault( boost::python::ptr(receiver) );
        }
    }
    
    bool default_isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::isDefault( boost::python::ptr(receiver) );
    }

    virtual bool isReadable(  ) const  {
        if( bp::override func_isReadable = this->get_override( "isReadable" ) )
            return func_isReadable(  );
        else{
            return this->CEGUI::Property::isReadable(  );
        }
    }
    
    bool default_isReadable(  ) const  {
        return CEGUI::Property::isReadable( );
    }

    virtual bool isWritable(  ) const  {
        if( bp::override func_isWritable = this->get_override( "isWritable" ) )
            return func_isWritable(  );
        else{
            return this->CEGUI::Property::isWritable(  );
        }
    }
    
    bool default_isWritable(  ) const  {
        return CEGUI::Property::isWritable( );
    }

    virtual void writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        else{
            this->CEGUI::Property::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Property::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
    }

};

void register_TypedPropertyColourUBox_class(){

    { //::CEGUI::TypedProperty< CEGUI::UBox >
        typedef bp::class_< TypedProperty_less__CEGUI_scope_UBox__greater__wrapper, bp::bases< CEGUI::Property >, boost::noncopyable > TypedPropertyColourUBox_exposer_t;
        TypedPropertyColourUBox_exposer_t TypedPropertyColourUBox_exposer = TypedPropertyColourUBox_exposer_t( "TypedPropertyColourUBox", bp::no_init );
        bp::scope TypedPropertyColourUBox_scope( TypedPropertyColourUBox_exposer );
        { //::CEGUI::TypedProperty< CEGUI::UBox >::get
        
            typedef CEGUI::TypedProperty< CEGUI::UBox > exported_class_t;
            typedef ::CEGUI::String ( exported_class_t::*get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*default_get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            TypedPropertyColourUBox_exposer.def( 
                "get"
                , get_function_type(&::CEGUI::TypedProperty< CEGUI::UBox >::get)
                , default_get_function_type(&TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::default_get)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::UBox >::getNative
        
            typedef CEGUI::TypedProperty< CEGUI::UBox > exported_class_t;
            typedef ::CEGUI::UBox ( exported_class_t::*getNative_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::UBox ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*default_getNative_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            TypedPropertyColourUBox_exposer.def( 
                "getNative"
                , getNative_function_type(&::CEGUI::TypedProperty< CEGUI::UBox >::getNative)
                , default_getNative_function_type(&TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::default_getNative)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::UBox >::getNative_impl
        
            typedef CEGUI::TypedProperty< CEGUI::UBox > exported_class_t;
            typedef ::CEGUI::UBox ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*getNative_impl_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            TypedPropertyColourUBox_exposer.def( 
                "getNative_impl"
                , getNative_impl_function_type( &TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::getNative_impl )
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::UBox >::set
        
            typedef CEGUI::TypedProperty< CEGUI::UBox > exported_class_t;
            typedef void ( exported_class_t::*set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            typedef void ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*default_set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            
            TypedPropertyColourUBox_exposer.def( 
                "set"
                , set_function_type(&::CEGUI::TypedProperty< CEGUI::UBox >::set)
                , default_set_function_type(&TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::default_set)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::UBox >::setNative
        
            typedef CEGUI::TypedProperty< CEGUI::UBox > exported_class_t;
            typedef void ( exported_class_t::*setNative_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::UBox const & ) ;
            typedef void ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*default_setNative_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::UBox const & ) ;
            
            TypedPropertyColourUBox_exposer.def( 
                "setNative"
                , setNative_function_type(&::CEGUI::TypedProperty< CEGUI::UBox >::setNative)
                , default_setNative_function_type(&TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::default_setNative)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::TypedProperty< CEGUI::UBox >::setNative_impl
        
            typedef CEGUI::TypedProperty< CEGUI::UBox > exported_class_t;
            typedef void ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*setNative_impl_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::UBox const & ) ;
            
            TypedPropertyColourUBox_exposer.def( 
                "setNative_impl"
                , setNative_impl_function_type( &TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::setNative_impl )
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::Property::clone
        
            typedef ::CEGUI::Property * ( ::CEGUI::Property::*clone_function_type )(  ) const;
            
            TypedPropertyColourUBox_exposer.def( 
                "clone"
                , bp::pure_virtual( clone_function_type(&::CEGUI::Property::clone) )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::Property::doesWriteXML
        
            typedef bool ( ::CEGUI::Property::*doesWriteXML_function_type )(  ) const;
            typedef bool ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*default_doesWriteXML_function_type )(  ) const;
            
            TypedPropertyColourUBox_exposer.def( 
                "doesWriteXML"
                , doesWriteXML_function_type(&::CEGUI::Property::doesWriteXML)
                , default_doesWriteXML_function_type(&TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::default_doesWriteXML) );
        
        }
        { //::CEGUI::Property::getDefault
        
            typedef ::CEGUI::String ( ::CEGUI::Property::*getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*default_getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            TypedPropertyColourUBox_exposer.def( 
                "getDefault"
                , getDefault_function_type(&::CEGUI::Property::getDefault)
                , default_getDefault_function_type(&TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::default_getDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::initialisePropertyReceiver
        
            typedef void ( ::CEGUI::Property::*initialisePropertyReceiver_function_type )( ::CEGUI::PropertyReceiver * ) const;
            typedef void ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*default_initialisePropertyReceiver_function_type )( ::CEGUI::PropertyReceiver * ) const;
            
            TypedPropertyColourUBox_exposer.def( 
                "initialisePropertyReceiver"
                , initialisePropertyReceiver_function_type(&::CEGUI::Property::initialisePropertyReceiver)
                , default_initialisePropertyReceiver_function_type(&TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::default_initialisePropertyReceiver)
                , ( bp::arg("arg0") ) );
        
        }
        { //::CEGUI::Property::isDefault
        
            typedef bool ( ::CEGUI::Property::*isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef bool ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*default_isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            TypedPropertyColourUBox_exposer.def( 
                "isDefault"
                , isDefault_function_type(&::CEGUI::Property::isDefault)
                , default_isDefault_function_type(&TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::default_isDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::isReadable
        
            typedef bool ( ::CEGUI::Property::*isReadable_function_type )(  ) const;
            typedef bool ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*default_isReadable_function_type )(  ) const;
            
            TypedPropertyColourUBox_exposer.def( 
                "isReadable"
                , isReadable_function_type(&::CEGUI::Property::isReadable)
                , default_isReadable_function_type(&TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::default_isReadable) );
        
        }
        { //::CEGUI::Property::isWritable
        
            typedef bool ( ::CEGUI::Property::*isWritable_function_type )(  ) const;
            typedef bool ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*default_isWritable_function_type )(  ) const;
            
            TypedPropertyColourUBox_exposer.def( 
                "isWritable"
                , isWritable_function_type(&::CEGUI::Property::isWritable)
                , default_isWritable_function_type(&TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::default_isWritable) );
        
        }
        { //::CEGUI::Property::writeXMLToStream
        
            typedef void ( ::CEGUI::Property::*writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            typedef void ( TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            
            TypedPropertyColourUBox_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Property::writeXMLToStream)
                , default_writeXMLToStream_function_type(&TypedProperty_less__CEGUI_scope_UBox__greater__wrapper::default_writeXMLToStream)
                , ( bp::arg("receiver"), bp::arg("xml_stream") ) );
        
        }
    }

}