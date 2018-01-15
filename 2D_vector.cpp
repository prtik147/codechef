vector < vector< int> > v(n, vector < int> ());

vector < vector< int> >::iterator row;
vector <int > ::iterator col;
for(row=v.begin();row!=v.end();row++)
{
	for(col =row->begin(); col!= row->end();col++)
	{
		*col;
	}
}
