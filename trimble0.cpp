

projects: a, b, c, d, e, f
dependencies: (a, d), (f, b), (b, d), (f, a), (d, c)



a,b,c,d,e,f

// m[a]="";
// m[b]="";
// m[c]="";
// m[d]="";
// m[f]="";
c,d,a,b,f

string exec(string a, string v[][]){
map<string,string>m;
for(int i=0;i<a.size();i++){
	m[a[i]]="";
	for(int j=0;j<v.size();j++){
		if(v[j]==a[i])
			m[a[i]]+=v[i];
	}
}

string ans="";
sort(m.begin(),m.end(),second());
for(auto it=m.begin();it!=m.end();it++){
	ans+=it->first;
}
return ans;
}