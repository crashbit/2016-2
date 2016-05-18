from sqlalchemy import *
from migrate import *


from migrate.changeset import schema
pre_meta = MetaData()
post_meta = MetaData()
producto = Table('producto', post_meta,
    Column('id', Integer, primary_key=True, nullable=False),
    Column('nombre', String(length=20)),
    Column('precio', Float),
    Column('inventario', Integer),
    Column('foto', String(length=100)),
    Column('descripcion', Text),
    Column('marca', String(length=20)),
    Column('calificacion', Float),
)


def upgrade(migrate_engine):
    # Upgrade operations go here. Don't create your own engine; bind
    # migrate_engine to your metadata
    pre_meta.bind = migrate_engine
    post_meta.bind = migrate_engine
    post_meta.tables['producto'].create()


def downgrade(migrate_engine):
    # Operations to reverse the above upgrade go here.
    pre_meta.bind = migrate_engine
    post_meta.bind = migrate_engine
    post_meta.tables['producto'].drop()
