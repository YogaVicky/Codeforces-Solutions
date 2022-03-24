// n nodes
// x amount between two nodes

int a[][]={{}};

p0,p1,p2,p3,p4,p5

m[p0]={p1,p2,p3,p4,p5}
m[p1]={p2,p3}
m[p2]={p5,p3}
m[p3]={p5,p4}
m[p4]={p2,p3}
m[p5]={p2,p3}


p1->p2 = total money
p1->p3.....p4->p5;
Identify the paths which are subpaths of some other main path and then eliminate them recursively till you
find no other recurring paths.



m[p6]={p7};
