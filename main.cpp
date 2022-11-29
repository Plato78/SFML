
#include <SFML/Graphics.hpp>

using namespace sf;
const float SC_WIDTH1 = 800.f;
const float SC_HIGHT1 = 600.f;
int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(SC_WIDTH1, SC_HIGHT1), "SFML Works!");

	RectangleShape square;
	square.setSize(Vector2f(50.f, 50.f));
	square.setPosition(0, 500);
	square.setFillColor(Color::Red);

	RectangleShape square1;
	square1.setSize(Vector2f(50.f, 50.f));
	square1.setPosition(0, 400);
	square1.setFillColor(Color::Green);

	RectangleShape square2;
	square2.setSize(Vector2f(50.f, 50.f));
	square2.setPosition(0, 300);
	square2.setFillColor(Color::Yellow); 

	RectangleShape square3;
	square3.setSize(Vector2f(50.f, 50.f));
	square3.setPosition(0,200);
	square3.setFillColor(Color::Blue);

	RectangleShape square4;
	square4.setSize(Vector2f(50.f, 50.f));
	square4.setPosition(0, 100);
	square4.setFillColor(Color::Red);
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}

		// Отрисовка окна 
		window.clear();
		/*window.draw(c1);
		window.draw(c2);
		window.draw(c3);
		window.draw(c4);
		window.draw(c5);*/
		window.draw(square);
		window.draw(square1);
		window.draw(square2);
		window.draw(square3);
		window.draw(square4);
		window.display();
	}
	
	return 0;
}