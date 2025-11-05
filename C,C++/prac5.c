#include <stdio.h>

struct stName
{
    char nael[12];
    int os, db, hab, hhab;
};

int main()
{
    struct stName st[3] = {{"stName1", 95, 88}, {"stName2", 84, 91}, {"stName3", 86, 75}};
    struct stName *p;
    p = &st[0];

    (p + 1)->hab = (p + 1)->os + (p + 2)->db;
    (p + 1)->hhab = (p + 1)->hab + p->os + p->db;

    printf("%d", (p + 1)->hab + (p + 1)->hhab);
}

/*
정답: 501
st[0]: os=95, db=88, hab=?, hhab=?
st[1]: os=84, db=91, hab=?, hhab=?
st[2]: os=86, db=75, hab=?, hhab=?

st[1].hab = st[1].os + st[2].db
st[1].hab = 84 + 75 = 159

st[1].hhab = st[1].hab + st[0].os + st[0].db
st[1].hhab = 159 + 95 + 88 = 342
*/