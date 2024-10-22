import pandas as pd
import numpy as np

# Simulating a sample sales dataset
np.random.seed(42)

# Sample data
data = {
    'Date': pd.date_range(start='2023-01-01', periods=100, freq='D'),
    'Product': np.random.choice(['Product_A', 'Product_B', 'Product_C'], size=100),
    'Region': np.random.choice(['North', 'South', 'East', 'West'], size=100),
    'Sales': np.random.randint(100, 1000, size=100)
}

# Creating DataFrame
df = pd.DataFrame(data)

# 1. Calculate total sales
total_sales = df['Sales'].sum()

# 2. Calculate average sales per product
average_sales_per_product = df.groupby('Product')['Sales'].mean()

# 3. Calculate sales by region
sales_by_region = df.groupby('Region')['Sales'].sum()

# Display the results
print("Total Sales:", total_sales)
print("\nAverage Sales per Product:")
print(average_sales_per_product)
print("\nSales by Region:")
print(sales_by_region)
