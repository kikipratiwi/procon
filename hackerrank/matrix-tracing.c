#define M 2000000
#define MOD 1000000007
long long inv[M],fact[M],factr[M];
int main(){
	int i,T,N,K;
	for(i=0;i<M;i++)inv[i]=fact[i]=factr[i]=1;
	for(i=2;i<M;i++){
		inv[i]=(MOD-MOD/i)*inv[MOD%i]%MOD;
		fact[i]=i*fact[i-1]%MOD;
		factr[i]=inv[i]*factr[i-1]%MOD;
	}
	for(scanf("%d",&T);T--;)scanf("%d%d",&N,&K),N--,K--,printf("%lld\n",fact[N+K]*factr[N]%MOD*factr[K]%MOD);
}