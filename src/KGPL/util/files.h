#ifndef KGPL_UTILFILE_H
#define KGPL_UTILFILE_H
#include "../kgpl.h"

namespace KGPL {
	size_t getFileSize(const char* path) {
		FILE* file = NULL;
		file = fopen(path, "rb");
		fseek(file, 0, SEEK_END);
		size_t size = ftell(file);
		return size;
	}
}

#endif