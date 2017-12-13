#include "BaseDomain.h"

BaseDomain::baseDomain(){
	//constructor
}

void BaseDomain::addBase(Base& base){
	base.verbose = false;
	repo.fileBase(base);
}

vector<Base> BaseDomain::getBase(){
	int c = 0;
	vector<Base> bases;
	bases = repo.fetchBases();
	while(c < bases.size()){
		bases[c].verbose = true;
		c++;
	}
	return bases;
}

int main(){
	BaseRepository repo;
	BaseDomain dom;
	vector<Base> bases;
	Base base;
	cin>>base;
	dom.addBase(base);
	bases = dom.getBase();
	cout<<bases[0]<<endl;

	return 0;
}
