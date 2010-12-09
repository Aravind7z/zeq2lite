typedef struct{
	qboolean exists;
	qboolean customWeapons;
	qboolean permanent;
	qboolean requirementButton;
	int requirementUseSkill;
	int requirementCurrent;
	int requirementMaximum;
	int requirementFatigue;
	int requirementHealth;
	int sustainCurrent;
	int sustainMaximum;
	int sustainHealth;
	int sustainFatigue;
	int speed;
	float zanzokenCost;
	float zanzokenSpeed;
	float zanzokenDistance;
	float airBrakeCost;
	float knockBackPower;
	float meleeAttack;
	float meleeDefense;
	float energyDefense;
	float energyAttackDamage;
	float energyAttackCost;
	float transformTime;
	float effectCurrent;
	float effectFatigue;
	float effectMaximum;
	float effectHealth;
	float breakLimitRate;
}tierConfig_g;
