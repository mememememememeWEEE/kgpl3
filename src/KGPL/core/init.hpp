#ifndef KGPL_INIT_H
#define KGPL_INIT_H
#include "../kgpl.h"

namespace KGPL {
	struct InitArgs final {
		uint32_t width = 600;
		uint32_t height = 600;
		const char* title = "KGPL";
		int OpenGL_VersionMajor = 3;
		int OpenGL_VersionMinor = 3;
	};

	//use a shared pointer later
	bool init(const InitArgs& args) noexcept;
}

#endif