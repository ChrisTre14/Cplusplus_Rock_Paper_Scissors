#include "GameLogic.h"

bool GameLogic::is_win(std::shared_ptr<Type> type1, std::shared_ptr<Type> type2){

    std::string name2=type2->get_name();
    std::vector<std::string> typeAdvantages1= type1->get_typeAdvantages();
    return (find(typeAdvantages1.begin(),typeAdvantages1.end(),name2) != typeAdvantages1.end());
}

bool GameLogic::is_draw(std::shared_ptr<Type> type1, std::shared_ptr<Type> type2){
    
    return (type2->get_name()==type1->get_name());
}

void GameLogic::win_condition(std::shared_ptr<Type> type1, std::shared_ptr<Type> type2){

    if(is_draw(type1,type2)){

		std::cout << "It's a draw" << std::endl;
	}
	else if(is_win(type1,type2)){

		std::cout << "You win" << std::endl;
	}
	else {
		
		std::cout << "You lose" << std::endl;
	}
}