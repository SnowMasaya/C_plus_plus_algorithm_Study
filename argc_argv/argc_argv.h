/*
 * argc_argv.h
 *
 *  Created on: Oct 7, 2016
 *      Author: masayaogushi
 */

#ifndef ARGC_ARGV_H_
#define ARGC_ARGV_H_

class argc_argv {
public:
	argc_argv();
	virtual ~argc_argv();
	void file_read(char *file_name);
private:
	char file_contents;
};

#endif /* ARGC_ARGV_H_ */
