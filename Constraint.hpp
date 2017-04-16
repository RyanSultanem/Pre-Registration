#pragma once
class Constraint
{
public:

	Constraint();
	~Constraint();
	void setHasComputer(bool hasComputer);
	bool hasComputer();

	void setHasSpeakers(bool hasSpeakers);
	bool hasSpeakers();

	void setHasHighEnergyParticleAccelerator(bool hasHighEnergyParticleAccelerator);
	bool HasHighEnergyParticleAccelerator();


private:

	bool mHasComputer = false;
	bool mHasSpeakers = false;
	bool mHasHighEnergyParticleAccelerator = false;

};

	