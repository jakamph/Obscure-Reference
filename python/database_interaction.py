## This is the interaction with the google spreadsheet that will
#  be called through the Qt application

import gdata
import gdata.gauth
import atom
import gdata.spreadsheet.service
import gdata.service
import atom.service
import gdata.spreadsheet

class Database_Interaction:

   def __init__( self,
                 username,
                 password,
                 database_name = "Obscure Reference Database" ):
      """This is the initializer of the class that will create the connection
      to the database"""
      
      #get a handle to the spreadsheet client 
      self.client  = gdata.spreadsheet.service.SpreadsheetsService()
      
      #save the user name and password 
      self.client.email = username
      self.client.password = password
      
      #log in to the system 
      self.client.ProgrammaticLogin()

      #save the name of the database      
      self.database_name = database_name

      self.database_sheet = None

      #get the list of spreadsheets
      self.spreadsheet_list = self.client.GetSpreadsheetsFeed()
      self.key = -1
      
      #make sure we got a list
      if self.spreadsheet_list <> None:
          for sheet in self.spreadsheet_list.entry:
              
              if database_name == sheet.title.text:
                  
                  self.database_sheet = sheet
                  path_parts = sheet.id.text.split( '/' )
                  self.key = path_parts[len(path_parts) - 1]
              #end if database name matches

          #end loop through the database list

      #end if we got a spreadsheet list      
      
   #end init

#end Database_Interaction   