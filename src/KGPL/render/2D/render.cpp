#include "2D.hpp"

bool KGPL::Render2D::render() {
    if (!KGPL::PRIVATE::CurrentScene->Supports2D) {
        KGPL_LOG_ERROR("Current scene does not support 2D rendering");
        return false;
    }

    return true;
}