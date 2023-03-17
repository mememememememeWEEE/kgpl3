#ifndef KGPL_INIT_H
#define KGPL_INIT_H
#include "../kgpl.h"

namespace KGPL {
	struct InitArgs final {
		uint32_t width = 600;
		uint32_t height = 600;
		const char* title = "KGPL";
	};

	bool init(const InitArgs& args) noexcept;
}

#endif