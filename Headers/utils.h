//! structure describing range of values, like minimum and maximum damage or range of range attack
struct range {
	//! minimum value
	float min; 
	//! maximum value
	float max;
	//! returns random value from range
	float roll();
	//! checks if value is in range
	bool isInRange(float value);
};