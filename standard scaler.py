#Standard scaler code
from sklearn.preprocessing import StandardScaler
import pandas as pd
data = pd.DataFrame({
    'Marks': [10,20,30]  
})
#Create scaler
scaler = StandardScaler()
#Apply scaling
data['scaled'] = scaler.fit_transform(data[['Marks']])
print(data)