s;main(x,n){for(;~scanf("%d%d",&n,&s);puts(s>0?"Pass":"Fail"))for(s=2*s*n-s;--n;s-=x)scanf("%d",&x);}