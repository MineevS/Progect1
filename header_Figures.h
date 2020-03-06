//Объявление функции.

//#pragma once

#ifndef HEADER_FIGURES_H
#define HEADER_FIGURES_H

	#include <iostream>
	#include <string>

	using namespace std;

	class Figure // Образ обьекта - Фугура.
	{

		public: // Методы обьекта.
	
			virtual ~Figure(){};// Метод(Диструктор)
	
			virtual void colculateS()=0; // Виртуальный метод (виртуальная функция-член) // 
			void printS(); // Метод(функция-член). //
	
			virtual void colculateP()=0; // Виртуальный метод (виртуальная функция-член) // 
			void printP(); // Метод(функция-член). //
	
			string getName(); // Метод(функция-член). //
			
			
		protected: // Данные обьекта. // Скрыты, но наследуются.
	
			Figure(const string& name); // Метод(Конструктор) //
			
			string Name; 	// Имя фигуры.
			
			float P; 		// Периметр фигуры.
			float S;  		// Площадь фигуры.	   
	
	
	};
	
#endif //HEADER_FIGURES_H