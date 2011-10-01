/**
  * @file
  *
  * This file contains the class definititon for the DatabaseObject class.
  *
  *
  * @author Jason Kamphaugh
  *
  */


#ifndef DATABASE_OBJECT_HPP
#define DATABASE_OBJECT_HPP

#include <QObject>
#include <QString>

namespace Obscure_Reference
{

/** This class is intended to be the base class for objects that
  * are represented in the database.
  *
  */
class DatabaseObject : public QObject
{
   Q_OBJECT
public:
   /**
     * This is the constructor for the DatabaseObject class.
     *
     * @param parent  The object that represents this object's parent.
     *
     *
     */
   explicit DatabaseObject(QObject* parent = 0);
   explicit DatabaseObject( int      id,
                            QString  name,
                            QObject* parent = 0 );

   /**
     * This method will retrieve the name of this database object.
     *
     * @return The QString name of this object.
     *
     */
   QString
   getName( void );

   /**
     * This method will retrieve the ID of this database object.
     *
     * @return  The integer ID of this object.
     *
     */
   int
   getId( void );

signals:

public slots:

private:

   /** This object's ID in the database */
   int m_id;

   /** The name of the object in the databse. */
   QString m_name;
};

}/* end namespace Obscure_Reference */

#endif // DATABASE_OBJECT_HPP
