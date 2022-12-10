# C - File I/O
Basic to intermediate tasks to help understand file descriptors and their purpose 
___
## 0-read_textfile.c
A function that reads a text file and prints it to the POSIX standard output.
* where letters is the number of letters it should read and print
* returns the actual number of letters it could read and print
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0
## 1-create\_file.c
A function that creates a file.
* where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
* Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
* The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
* if the file already exists, truncate it
* if filename is NULL return -1
* if text_content is NULL create an empty file
## 2-append\_text\_to\_file.c
A function that appends text at the end of a file.
* where ***filename*** is the name of the file and ***text_content*** is the ***NULL*** terminated string to add at the end of the file
* Return: **1** on success and **-1** on failure
* Do not create the file if it does not exist
* If ***filename*** is ***NULL*** return **-1**
* If ***text_content*** is ***NULL***, do not add anything to the file. Return **1** if the file exists and **-1** if the file does not exist or if you do not have the required permissions to write the file
## 3-cp.c
A program that copies the content of a file to another file.
* Usage: ***cp file\_from file\_to***
* if the number of argument is not the correct one, exit with code **97** and print ***Usage: cp file\_from file\_to***,followed by a new line, on the ***POSIX*** standard error
* if ***file\_to*** already exists, truncate it
* if ***file\_from*** does not exist, or if you can not read it, exit with code **98** and print ***Error: Can't read from file NAME\_OF\_THE\_FILE***, followed by a new line, on the ***POSIX*** standard error
    * where ***NAME\_OF\_THE\_FILE*** is the first argument passed to your program
* if you can not create or if ***write*** to ***file\_to*** fails, exit with code **99** and print ***Error: Can't write to NAME\_OF\_THE\_FILE***, followed by a new line, on the ***POSIX*** standard error
    * where ***NAME\_OF\_THE\_FILE*** is the second argument passed to your program
* if you can not close a file descriptor , exit with code **100** and print ***Error: Cannot close fd FD\_VALUE***, followed by a new line, on the ***POSIX*** standard error
    * where ***FD\_VALUE*** is the value of the file descriptor
* Permissions of the created file: ***rw-rw-r--***. If the file already exists, do not change the permissions
* You must read **1,024** bytes at a time from the ***file\_from*** to make less system calls. Use a buffer
* You are allowed to use ***dprintf***
