import pandas as pd
from scipy.stats import kurtosis
import pylab as p
df = pd.read_csv (r'/Users/nameadd/LAB_3SEM/DSE/diabetes.csv')
print (df)
df1 = pd.DataFrame(df, columns= ['Age','Glucose'])
print (df1)
df1.mean()
df1.median()
df1.mode()
print(df1.var())
df1.std()
print(df1.skew())
print(kurtosis(df, axis=0, bias=True))