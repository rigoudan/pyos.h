#include "extern/tinydir.h"

#include <vector>
#include <string>

using namespace std;

vector<string> listdir(string path = ".") {
	
	tinydir_dir dir;
	tinydir_open(&dir, TINYDIR_STRING(path.c_str()));
	
	vector<string> res;
	
	while (dir.has_next) {
		tinydir_file file;
		tinydir_readfile(&dir, &file);
		res.push_back(file.name);
		tinydir_next(&dir);
	}
	tinydir_close(&dir);
	return res;
}