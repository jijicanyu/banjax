#include "Feature.h"

class FeatureHTTPStatusRatio:public Feature
{
public:
	virtual int GetDataSize();
	virtual void Aggregrate(LogEntry *le,FeatureContainer *,void *data,float *featureValue);
};