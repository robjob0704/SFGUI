#include <SFGUI/Engines/Bob.hpp>
#include <SFGUI/Context.hpp>
#include <SFGUI/Renderer.hpp>
#include <SFGUI/Separator.hpp>

namespace sfg {
namespace eng {

std::unique_ptr<RenderQueue> Bob::CreateSeparatorDrawable( std::shared_ptr<const Separator> separator ) const {
	std::unique_ptr<RenderQueue> queue( new RenderQueue );


	if( separator->GetOrientation() == Separator::Orientation::HORIZONTAL ) {
		queue->Add( CreateSpritebox( sf::FloatRect( 0.f, 0.f, separator->GetAllocation().width, separator->GetAllocation().height ),
								     GetResourceManager().GetImage( GetProperty<std::string>( "Image", separator ) ),
								     GetProperty<UintRect>( "SubRect", separator ),
								     3, 1 ) );
	}
	else {
		queue->Add( CreateSpritebox( sf::FloatRect( 0.f, 0.f, separator->GetAllocation().height, separator->GetAllocation().width ),
								     GetResourceManager().GetImage( GetProperty<std::string>( "Image", separator ) ),
								     GetProperty<UintRect>( "SubRect", separator ),
								     3, 1, true ) );
	}

	return queue;
}

}
}
