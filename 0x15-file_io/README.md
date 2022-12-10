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
