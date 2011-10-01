/**
  * @file
  *
  * This file contains the class definititon for the DatabaseObject class.
  *
  *
  * @author Jason Kamphaugh
  *
  */

#include <QObject>
#include <QString>
#include "database_object.hpp"

using namespace Obscure_Reference;

DatabaseObject::DatabaseObject(QObject *parent) :
   QObject(parent),
   m_id( -1 ),
   m_name( QString::null )
{
}/* end ::DatabaseObject */

DatabaseObject::DatabaseObject( int      id,
                                QString  name,
                                QObject* parent ) :
   QObject( parent ),
   m_id( id ),
   m_name( name )
{
}/* end ::DatabaseObject */


/* See the header file for information on using this method */
QString
DatabaseObject::getName()
{
   return m_name;
}/* end getName */

/* See the header file for information on using this method */
int
DatabaseObject::getId( )
{
   return m_id;
}/* end getId */
