#include "data.hpp"

Data* Data::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

uintptr_t Data::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}