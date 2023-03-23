#include "entity2D.hpp"

KGPL::Entity2D::Entity2D() 
	: visible(true)
{
	KGPL_LOG_INFO("Created a Entity (2D)");
}

KGPL::Entity2D::~Entity2D() {
}

void KGPL::Entity2D::BindTexture() {
}
