//Объявление функции.

//#pragma once

#ifndef HEADER_QUADRANGLES_H
#define HEADER_QUADRANGLES_H

	#include "header_Figures.h"

	class Square : public Figure
	{
		public:
			Square();
			Square(float m);
			
			~Square();
			
			float getA();
			
			void colculateS() override;
			void colculateP() override;
		
		protected:
			float a;
			
	
	};
	
#endif //HEADER_QUADRANGLES_H