#pragma once

template<class X>
class Wish
{
private:
	X value;
	float priority;
public:
	void SetValue(X input);
	X GetValue();
	void SetPriority(float input);
	float GetPriority();
	Wish();
	~Wish();
};

template<class X>
inline void Wish<X>::SetValue(X input)
{
	value = input;
}

template<class X>
inline X Wish<X>::GetValue()
{
	return value;
}

template<class X>
inline void Wish<X>::SetPriority(float input)
{
	priority = input;
}

template<class X>
inline float Wish<X>::GetPriority()
{
	return priority;
}

template<class X>
inline Wish<X>::Wish()
{
}

template<class X>
inline Wish<X>::~Wish()
{
}
