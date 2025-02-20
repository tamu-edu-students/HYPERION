"""
`optimize.py`

Determine an optimal measurement strategy through integration with `simulate.py`.

- Set up an objective function using the outputs from the filter.
- Optimize by running the filter on the objective function and maximizing/minimizing
- Output various performance metrics
"""