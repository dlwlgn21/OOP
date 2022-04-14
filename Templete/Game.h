#pragma once
template <typename T>
class Game
{
	T mValue;
public:
	void Function(T arg);
};

template<typename T>
inline void Game<T>::Function(T arg)
{
	std::cout << "CALL!!" << std::endl;
}