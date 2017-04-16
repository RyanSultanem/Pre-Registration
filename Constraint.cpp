#include "Constraint.hpp"



Constraint::Constraint()
{
}


Constraint::~Constraint()
{
}

void Constraint::setHasComputer(bool hasComputer)
{
	mHasComputer = hasComputer;
}

bool Constraint::hasComputer()
{
	return mHasComputer;
}

void Constraint::setHasSpeakers(bool hasSpeakers)
{
	mHasSpeakers = hasSpeakers;
}

bool Constraint::hasSpeakers()
{
	return mHasComputer;
}

void Constraint::setHasHighEnergyParticleAccelerator(bool hasHighEnergyParticleAccelerator)
{
	mHasHighEnergyParticleAccelerator = hasHighEnergyParticleAccelerator;
}

bool Constraint::HasHighEnergyParticleAccelerator()
{
	return mHasHighEnergyParticleAccelerator;
}
