#include "IntVector.h"
#include <cstddef>
#include "IntSorter.h"
#include "IntVectorIterator.h"

using namespace std;

IntVector::IntVector(const int aArrayOfIntegers[], size_t aNumberOfElements) 
{ 
	fNumberOfElements = aNumberOfElements;   
	fElements = new int[fNumberOfElements];

	for (size_t i = 0; i < fNumberOfElements; i++) 
	{ 
		fElements[i] = aArrayOfIntegers[i]; 
	} 
}

size_t IntVector::size() const
{
	return fNumberOfElements;
}

void IntVector::swap(size_t aSourceIndex, size_t aTargetIndex)
{
	size_t tempIndex = aSourceIndex;
	aSourceIndex = aTargetIndex;
	aTargetIndex = tempIndex;
}

void IntVector::sort(const IntSorter& aSorter)
{
	
}

const int IntVector::operator[](size_t aIndex) const
{
	return fElements[aIndex];
}

IntVectorIterator IntVector::begin() const
{
	IntVectorIterator beginIterator(IntVector * vector);
}
IntVectorIterator IntVector::end() const
{
	IntVectorIterator endIterator(IntVector *vector);
}
