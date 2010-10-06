#pragma once

#include <SFGUI/Config.hpp>
#include <SFGUI/RenderEngine.hpp>

namespace sfg {
namespace eng {

class BREW : public RenderEngine {
	public:
		sf::Drawable* CreateWindowDrawable( Window::Ptr window ) const;
};

}
}
