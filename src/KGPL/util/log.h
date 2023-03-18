#ifndef KGPL_LOG_H
#define KGPL_LOG_H
//#define KGPL_LOG_INFO(...)  KGPL::m___kgpl_log_info(__VA_ARGS__)
//#define KGPL_LOG_ERROR(...) KGPL::m___kgpl_log_error(__VA_ARGS__)

#define KGPL_LOG_INFO(...)  fprintf(stdout, "\x1b[0;30;46m" "INFO:  " "\x1b[0m" "  " __VA_ARGS__); fprintf(stdout, "\n")
#define KGPL_LOG_ERROR(...) fprintf(stderr, "\x1b[0;30;41m" "ERROR: " "\x1b[0m" "  " __VA_ARGS__); fprintf(stderr, "\n")

namespace KGPL {
	inline namespace Util {
		namespace Log {
			inline void m___kgpl_log_info(const char* fmt...) {
				fprintf(stdout, "\x1b[0;30;46m" "INFO:   " "\x1b[0m" "  ");
				fprintf(stdout, fmt);
				fprintf(stdout, "\n");
			}

			inline void m___kgpl_log_error(const char* fmt...) {
				fprintf(stdout, "\x1b[0;30;41m" "ERROR:  " "\x1b[0m" "  ");
				fprintf(stdout, fmt);
				fprintf(stdout, "\n");
			}
		}
	}
}

#endif