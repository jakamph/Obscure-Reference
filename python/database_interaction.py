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
      self._client  = gdata.spreadsheet.service.SpreadsheetsService()
      
      #save the user name and password 
      self._client.email = username
      self._client.password = password
      
      #log in to the system 
      self._client.ProgrammaticLogin()

      #save the name of the database      
      self._database_name = database_name

      self._database_sheet = None

      #get the list of spreadsheets
      self._spreadsheet_list = self._client.GetSpreadsheetsFeed()
      self._key = -1
      
      #make sure we got a list
      if self._spreadsheet_list <> None:
          for sheet in self._spreadsheet_list.entry:
              
              if database_name == sheet.title.text:
                  
                  self._database_sheet = sheet
                  path_parts = sheet.id.text.split( '/' )
                  self._key = path_parts[len(path_parts) - 1]
              #end if database name matches

          #end loop through the database list

      #end if we got a spreadsheet list      
      
   #end init

   def Get_Table( self,
                  table_name ):
      """This method will retrieve the table (tab) with the given name"""

      #make sure we have a valid table name
      if None <> table_name:

         #retrieve the table from the spreadsheet
         self._worksheet_list = self._client.GetWorksheetsFeed(self._key)
         if self._worksheet_list <> None:
            _wksht_id = ''

            for worksheet in self._worksheet_list.entry:
                 
                 if table_name == worksheet.title.text:
                     
                     path_parts = worksheet.id.text.split( '/' )
                     _wksht_id = path_parts[len(path_parts) - 1]

                     #add to local table of already found worksheets?

                  #end if database name matches

            #end loop through the database list
                     
            if _wksht_id == ''
            #no table match found  

         #end if we got a spreadsheet list      
      
      #end if valid table_name

   #end Get_Table

   def Get_Player( self,
                   player_name ):
      """This method will retrive the specified player."""      

      #make sure that we received a valid player name
      if None <>:

         #get the player table
         #maybe not if we already have that table? if we don't want to ping the
         #spreadsheet each time, do we want to check that here or in the 
         #Get_Table method?


   #end Get_Player

   def Get_Team( self,
                 team_name ):
      """This method will retrieve the team of the specified name."""

      #near as I can tell, this is just a pass-through to get the table
      #with the team name.
      #We might want to beef this up so that it will pull all of the pertinent
      #data (players, salary, etc) in to a structure to be read outside of
      #this function.
      return self.Get_Table( team_name )

   #end Get_Team



#end Database_Interaction   
