int registration(sqlite3* db, char* username, char* err_msg){
     char command[1024];
    strcpy(command, "INSERT INTO users VALUES ");
    strcat(command, "(");
    strcat(command, "'");
    strcat(command, username);
    strcat(command, "'");
    strcat(command, ");");
     
    return sqlite3_exec(db, command, 0, 0, &err_msg);
 }
