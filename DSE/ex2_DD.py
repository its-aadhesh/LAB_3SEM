import pandas as pd
data = pd.read_csv (r'/Users/nameadd/LAB_3SEM/DSE/Product.csv')
data
df = pd.DataFrame(data, columns= ['Product ID','Quantity Sold'])
print (df)
data.head()
data.tail()
data.shape
sortedcolumn = data.sort_values(['Product ID'], ascending = False)
sortedcolumn['Product ID'].head(5)
data.describe()