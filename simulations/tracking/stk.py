"""
`stk.py`

Host all STK integration here.

- Load satellites (attach, load from file, or load new)
    - 30 LEO sats
    - Follow HYPERION orbital parameters
- Load sensor (attach, load from file, or load new)
    - FoR constraint: +/- X deg
    - FoV constraint: +/- X deg
    - LoS constraint
    - Range constraint: x km
    - Targeted
    - NOTE: Sensor class will need to updated to add new constraints and targeting feature
- Load missile (attach, load from file, or load new)
- Load sensors->missile chain

- Compute and save missile ECF trajectory (ground truth)
- Compute sensors->missile access intervals
- Determine sensor with longest continuous access interval
- Get and save Az-El-Range measurements for this access interval
"""