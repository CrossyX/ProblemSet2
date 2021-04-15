#include "IntVectorIterator.h"

using namespace std;

IntVectorIterator::IntVectorIterator(const IntVector& aContainer, size_t aStart = 0) : fContainer(aContainer)
{
	fPosition = aStart;
}

const int IntVectorIterator::operator*() const
{

}

IntVectorIterator& IntVectorIterator::operator++()
{

}

IntVectorIterator IntVectorIterator::operator++(int)
{

}

bool IntVectorIterator::operator==(const IntVectorIterator& aRHS) const
{

}
bool IntVectorIterator::operator!=(const IntVectorIterator& aRHS) const
{

}

IntVectorIterator IntVectorIterator::begin() const
{

}

IntVectorIterator IntVectorIterator::end() const
{

}